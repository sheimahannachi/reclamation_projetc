#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonction.h"
#include <string.h>



int confirmer=0;
int categorie=3;
reclamation rec_modifier ;

void
on_treeview_row_activated              (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
gchar *identifiant,*nbv, *categorie,*reclamation;
gint *nle;


GtkTreeModel *model = gtk_tree_view_get_model(treeview);

	if (gtk_tree_model_get_iter(model, &iter,path))
	{   
     gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0, &identifiant, 1 , &nle, 2, &nbv, 3, &categorie, 4, &reclamation, -1);

	supprimer_rec(identifiant);
GtkWidget *treeview2;
	treeview2=lookup_widget(treeview,"treeview");
	afficher_rec(treeview2);
 	 }
}


void
on_supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{	
	reclamation rec;
	char id1[20];
	GtkWidget  *identifiant1 ;
	identifiant1= lookup_widget(button,"identifiant1");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(identifiant1)));
	supprimer_rec(id1);
	GtkWidget *treeview;
	treeview=lookup_widget(button,"treeview");
	afficher_rec(treeview);
}


void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	


	char id1[20];
	GtkWidget  *identifiant1 ;
	identifiant1= lookup_widget(button,"identifiant1");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(identifiant1)));
	
	
	reclamation rec;

    FILE * f=fopen("reclamations.txt", "r");
    if(f==NULL)
	return 0;
    else
	    {
		while(fscanf(f,"%s %d %s %s %s",rec.identifiant,&rec.nle,rec.nbv,rec.categorie,rec.reclamation)!=EOF)
		{
			if(strcmp(rec.identifiant,id1)==0){
				strcpy(rec_modifier.identifiant,rec.identifiant);
				rec_modifier.nle=rec.nle;
				strcpy(rec_modifier.nbv,rec.nbv);
				strcpy(rec_modifier.categorie,rec.categorie);
				strcpy(rec_modifier.reclamation,rec.reclamation);
			}
		}
		fclose(f);
	    }


	

	GtkWidget *window,*window2;
	window=create_modifier_reclamation();
	gtk_widget_show(window);	
	window2=lookup_widget(button,"gestion_reclamation");
	gtk_widget_destroy(window2);

	GtkWidget *id,*nle,*nbv ,*recl ;


GtkWidget *categorie_faible2,*categorie_moyen2,*categorie_urgent2;
	categorie_faible2=lookup_widget(window,"categorie_faible2");
	categorie_moyen2=lookup_widget(window,"categorie_moyen2");
	categorie_urgent2=lookup_widget(window,"categorie_urgent2");

	if (strcmp(rec_modifier.categorie,"faible")==0){
	categorie=1;
gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(categorie_faible2),TRUE);}
else if (strcmp(rec_modifier.categorie,"moyen")==0){
gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(categorie_moyen2),TRUE); 
categorie=2;}
else if (strcmp(rec_modifier.categorie,"urgent")==0){
categorie=3;
gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(categorie_urgent2),TRUE); 
}







	id = lookup_widget (window,"identifiant2" );
	nle = lookup_widget (window,"spinnle2");
	nbv = lookup_widget (window,"combonbv2");
	recl=lookup_widget(window,"reclamation2");

gtk_entry_set_text(id,rec_modifier.identifiant);
gtk_spin_button_set_value(nle,rec_modifier.nle);

gtk_combo_box_set_active(GTK_ENTRY(nbv),atoi(rec_modifier.nbv)-1);
gtk_entry_set_text(GTK_ENTRY(recl),rec_modifier.reclamation);

}


void
on_chercher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	reclamation rec;
	char id1[20];
	GtkWidget  *identifiant1 ;
	identifiant1= lookup_widget(button,"identifiant1");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(identifiant1)));
	GtkWidget *treeview;
	treeview=lookup_widget(button,"treeview");
	chercher_rec(id1,treeview);
	
}


void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window,*window2;
	window=create_ajout_reclamation();
	gtk_widget_show(window);
	
	window2=lookup_widget(button,"gestion_reclamation");
	gtk_widget_destroy(window2);
}


void
on_faible_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
	categorie=1;

}


void
on_moyen_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
	categorie=2;
}


void
on_urgent_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
	categorie=3;
}


void
on_confirmer_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){
	confirmer=1;
}
else{
confirmer=0;
}

}


void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window,*window2;
	window=create_gestion_reclamation();
	gtk_widget_show(window);
	
	window2=lookup_widget(button,"ajout_reclamation");
	gtk_widget_destroy(window2);

	GtkWidget *treeview;
	treeview=lookup_widget(window,"treeview");
	afficher_rec(treeview);
confirmer=0;

}
void
on_ajouter_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *id,*nle,*nbv ,*recl ;
reclamation rec;
GtkWidget *fenetre_ajout ;
fenetre_ajout =lookup_widget(objet,"ajout_reclamation");

id = lookup_widget (objet,"identifiant" );
nle = lookup_widget (objet,"spinnle");
nbv = lookup_widget (objet,"combonbv");
recl=lookup_widget(objet,"reclamation");




strcpy (rec.identifiant,gtk_entry_get_text(GTK_ENTRY(id)));
rec.nle=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nle));
strcpy(rec.nbv,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nbv)));
strcpy (rec.reclamation,gtk_entry_get_text(GTK_ENTRY(recl)));
g_print("%d",categorie);
if (confirmer==1){
	ajouter(rec,categorie);}


}



void
on_button_actualiser_rec_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *treeview;
	treeview=lookup_widget(button,"treeview");
	afficher_rec(treeview);
}







void
on_button_modifier2_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *id,*nle,*nbv ,*recl ;
	reclamation rec;

	id = lookup_widget (button,"identifiant2" );
	nle = lookup_widget (button,"spinnle2");
	nbv = lookup_widget (button,"combonbv2");
	recl=lookup_widget(button,"reclamation2");




	strcpy (rec.identifiant,gtk_entry_get_text(GTK_ENTRY(id)));
	rec.nle=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nle));
	strcpy(rec.nbv,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nbv)));
	strcpy (rec.reclamation,gtk_entry_get_text(GTK_ENTRY(recl)));


	if( categorie==1)
strcpy (rec.categorie,"faible");
	if( categorie==2)
strcpy (rec.categorie,"moyen");
	if( categorie==3)
strcpy (rec.categorie,"urgent");

	if (confirmer==1){
		modifier_rec(rec_modifier.identifiant,rec);
	}


}


void
on_button_afficher2_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window,*window2;
	window=create_gestion_reclamation();
	gtk_widget_show(window);
	
	window2=lookup_widget(button,"modifier_reclamation");
	gtk_widget_destroy(window2);

	GtkWidget *treeview;
	treeview=lookup_widget(window,"treeview");
	afficher_rec(treeview);
	confirmer=0;
}


void
on_button_statistique_rec_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window,*window2;
	window=create_statistique_reclamation();
	gtk_widget_show(window);
	
	window2=lookup_widget(button,"gestion_reclamation");
	gtk_widget_destroy(window2);

	GtkWidget *treeview;


}


void
on_button_retour_stat_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window,*window2;
	window=create_gestion_reclamation();
	gtk_widget_show(window);
	
	window2=lookup_widget(button,"statistique_reclamation");
	gtk_widget_destroy(window2);
}

