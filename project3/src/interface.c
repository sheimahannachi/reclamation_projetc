/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ajout_reclamation (void)
{
  GtkWidget *ajout_reclamation;
  GtkWidget *fixed1;
  GtkWidget *identifiant;
  GtkObject *spinnle_adj;
  GtkWidget *spinnle;
  GtkWidget *combonbv;
  GtkWidget *reclamation;
  GtkWidget *label1;
  GtkWidget *label5;
  GtkWidget *afficher;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label8;
  GtkWidget *ajouter;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label7;
  GtkWidget *categorie;
  GtkWidget *moyen;
  GSList *moyen_group = NULL;
  GtkWidget *id;
  GtkWidget *nle;
  GtkWidget *label4;
  GtkWidget *confirmer;
  GtkWidget *urgent;
  GtkWidget *faible;

  ajout_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajout_reclamation), _("ajout reclamation"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ajout_reclamation), fixed1);

  identifiant = gtk_entry_new ();
  gtk_widget_show (identifiant);
  gtk_fixed_put (GTK_FIXED (fixed1), identifiant, 160, 104);
  gtk_widget_set_size_request (identifiant, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (identifiant), 8226);

  spinnle_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinnle = gtk_spin_button_new (GTK_ADJUSTMENT (spinnle_adj), 1, 0);
  gtk_widget_show (spinnle);
  gtk_fixed_put (GTK_FIXED (fixed1), spinnle, 112, 184);
  gtk_widget_set_size_request (spinnle, 60, 27);

  combonbv = gtk_combo_box_new_text ();
  gtk_widget_show (combonbv);
  gtk_fixed_put (GTK_FIXED (fixed1), combonbv, 313, 185);
  gtk_widget_set_size_request (combonbv, 51, 27);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("1"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("2"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("3"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("4"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("5"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("6"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("7"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("8"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("9"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv), _("10"));

  reclamation = gtk_entry_new ();
  gtk_widget_show (reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), reclamation, 168, 272);
  gtk_widget_set_size_request (reclamation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (reclamation), 8226);

  label1 = gtk_label_new (_("Ajout Reclamation"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 272, 32);
  gtk_widget_set_size_request (label1, 145, 25);
  gtk_misc_set_alignment (GTK_MISC (label1), 0.46, 0.5);

  label5 = gtk_label_new (_("reclamation"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 56, 280);
  gtk_widget_set_size_request (label5, 97, 17);

  afficher = gtk_button_new ();
  gtk_widget_show (afficher);
  gtk_fixed_put (GTK_FIXED (fixed1), afficher, 552, 248);
  gtk_widget_set_size_request (afficher, 104, 37);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (afficher), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox2), label8, FALSE, FALSE, 0);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouter, 552, 136);
  gtk_widget_set_size_request (ajouter, 104, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox1), label7, FALSE, FALSE, 0);

  categorie = gtk_label_new (_("categorie"));
  gtk_widget_show (categorie);
  gtk_fixed_put (GTK_FIXED (fixed1), categorie, 40, 416);
  gtk_widget_set_size_request (categorie, 104, 17);

  moyen = gtk_radio_button_new_with_mnemonic (NULL, _("moyen"));
  gtk_widget_show (moyen);
  gtk_fixed_put (GTK_FIXED (fixed1), moyen, 176, 400);
  gtk_widget_set_size_request (moyen, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (moyen), moyen_group);
  moyen_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (moyen));

  id = gtk_label_new (_("id"));
  gtk_widget_show (id);
  gtk_fixed_put (GTK_FIXED (fixed1), id, 112, 112);
  gtk_widget_set_size_request (id, 41, 17);

  nle = gtk_label_new (_("nle"));
  gtk_widget_show (nle);
  gtk_fixed_put (GTK_FIXED (fixed1), nle, 56, 192);
  gtk_widget_set_size_request (nle, 41, 17);

  label4 = gtk_label_new (_("nbv"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 256, 192);
  gtk_widget_set_size_request (label4, 41, 17);

  confirmer = gtk_check_button_new_with_mnemonic (_("confirmer"));
  gtk_widget_show (confirmer);
  gtk_fixed_put (GTK_FIXED (fixed1), confirmer, 208, 304);
  gtk_widget_set_size_request (confirmer, 118, 24);

  urgent = gtk_radio_button_new_with_mnemonic (NULL, _("urgent"));
  gtk_widget_show (urgent);
  gtk_fixed_put (GTK_FIXED (fixed1), urgent, 176, 432);
  gtk_widget_set_size_request (urgent, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (urgent), moyen_group);
  moyen_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (urgent));

  faible = gtk_radio_button_new_with_mnemonic (NULL, _("faible"));
  gtk_widget_show (faible);
  gtk_fixed_put (GTK_FIXED (fixed1), faible, 176, 368);
  gtk_widget_set_size_request (faible, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (faible), moyen_group);
  moyen_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (faible));

  g_signal_connect ((gpointer) afficher, "clicked",
                    G_CALLBACK (on_afficher_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) moyen, "toggled",
                    G_CALLBACK (on_moyen_toggled),
                    NULL);
  g_signal_connect ((gpointer) confirmer, "toggled",
                    G_CALLBACK (on_confirmer_toggled),
                    NULL);
  g_signal_connect ((gpointer) urgent, "toggled",
                    G_CALLBACK (on_urgent_toggled),
                    NULL);
  g_signal_connect ((gpointer) faible, "toggled",
                    G_CALLBACK (on_faible_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajout_reclamation, ajout_reclamation, "ajout_reclamation");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, identifiant, "identifiant");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, spinnle, "spinnle");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, combonbv, "combonbv");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, reclamation, "reclamation");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, label1, "label1");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, label5, "label5");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, afficher, "afficher");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, image2, "image2");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, label8, "label8");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, image1, "image1");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, label7, "label7");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, categorie, "categorie");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, moyen, "moyen");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, id, "id");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, nle, "nle");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, label4, "label4");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, confirmer, "confirmer");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, urgent, "urgent");
  GLADE_HOOKUP_OBJECT (ajout_reclamation, faible, "faible");

  return ajout_reclamation;
}

GtkWidget*
create_gestion_reclamation (void)
{
  GtkWidget *gestion_reclamation;
  GtkWidget *fixed2;
  GtkWidget *label9;
  GtkWidget *identifiant1;
  GtkWidget *treeview;
  GtkWidget *supprimer;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label11;
  GtkWidget *label10;
  GtkWidget *button_actualiser_rec;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label15;
  GtkWidget *modifier;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label12;
  GtkWidget *retour;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label14;
  GtkWidget *chercher;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label13;
  GtkWidget *button_statistique_rec;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label26;

  gestion_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (gestion_reclamation), _("gestion reclamation"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (gestion_reclamation), fixed2);

  label9 = gtk_label_new (_("gestion_reclamation"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed2), label9, 296, 32);
  gtk_widget_set_size_request (label9, 169, 17);

  identifiant1 = gtk_entry_new ();
  gtk_widget_show (identifiant1);
  gtk_fixed_put (GTK_FIXED (fixed2), identifiant1, 640, 88);
  gtk_widget_set_size_request (identifiant1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (identifiant1), 8226);

  treeview = gtk_tree_view_new ();
  gtk_widget_show (treeview);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview, 112, 168);
  gtk_widget_set_size_request (treeview, 400, 250);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer, 656, 152);
  gtk_widget_set_size_request (supprimer, 104, 37);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox3), label11, FALSE, FALSE, 0);

  label10 = gtk_label_new (_("id"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed2), label10, 587, 93);
  gtk_widget_set_size_request (label10, 49, 17);

  button_actualiser_rec = gtk_button_new ();
  gtk_widget_show (button_actualiser_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), button_actualiser_rec, 256, 96);
  gtk_widget_set_size_request (button_actualiser_rec, 104, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button_actualiser_rec), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("Actualiser"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox7), label15, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed2), modifier, 656, 232);
  gtk_widget_set_size_request (modifier, 104, 37);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (modifier), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox4), label12, FALSE, FALSE, 0);

  retour = gtk_button_new ();
  gtk_widget_show (retour);
  gtk_fixed_put (GTK_FIXED (fixed2), retour, 656, 392);
  gtk_widget_set_size_request (retour, 106, 37);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (retour), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-redo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox6), label14, FALSE, FALSE, 0);

  chercher = gtk_button_new ();
  gtk_widget_show (chercher);
  gtk_fixed_put (GTK_FIXED (fixed2), chercher, 656, 312);
  gtk_widget_set_size_request (chercher, 104, 37);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (chercher), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("chercher"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox5), label13, FALSE, FALSE, 0);

  button_statistique_rec = gtk_button_new ();
  gtk_widget_show (button_statistique_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), button_statistique_rec, 656, 472);
  gtk_widget_set_size_request (button_statistique_rec, 104, 37);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button_statistique_rec), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-paste", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label26 = gtk_label_new_with_mnemonic (_("Statistique"));
  gtk_widget_show (label26);
  gtk_box_pack_start (GTK_BOX (hbox11), label26, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview, "row_activated",
                    G_CALLBACK (on_treeview_row_activated),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_actualiser_rec, "clicked",
                    G_CALLBACK (on_button_actualiser_rec_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour, "clicked",
                    G_CALLBACK (on_retour_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercher, "clicked",
                    G_CALLBACK (on_chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_statistique_rec, "clicked",
                    G_CALLBACK (on_button_statistique_rec_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gestion_reclamation, gestion_reclamation, "gestion_reclamation");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label9, "label9");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, identifiant1, "identifiant1");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, treeview, "treeview");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image3, "image3");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label11, "label11");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label10, "label10");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, button_actualiser_rec, "button_actualiser_rec");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image7, "image7");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label15, "label15");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image4, "image4");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label12, "label12");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, retour, "retour");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image6, "image6");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label14, "label14");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, chercher, "chercher");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image5, "image5");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label13, "label13");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, button_statistique_rec, "button_statistique_rec");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, image11, "image11");
  GLADE_HOOKUP_OBJECT (gestion_reclamation, label26, "label26");

  return gestion_reclamation;
}

GtkWidget*
create_modifier_reclamation (void)
{
  GtkWidget *modifier_reclamation;
  GtkWidget *fixed3;
  GtkWidget *identifiant2;
  GtkObject *spinnle2_adj;
  GtkWidget *spinnle2;
  GtkWidget *reclamation2;
  GtkWidget *label17;
  GtkWidget *label20;
  GtkWidget *label21;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *label16;
  GtkWidget *button_modifier2;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label19;
  GtkWidget *button_afficher2;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label18;
  GtkWidget *combonbv2;
  GtkWidget *confirmer2;
  GtkWidget *categorie_faible2;
  GSList *categorie_faible2_group = NULL;
  GtkWidget *categorie_moyen2;
  GtkWidget *categorie_urgent2;

  modifier_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (modifier_reclamation), _("Modifier reclamation"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (modifier_reclamation), fixed3);

  identifiant2 = gtk_entry_new ();
  gtk_widget_show (identifiant2);
  gtk_fixed_put (GTK_FIXED (fixed3), identifiant2, 160, 104);
  gtk_widget_set_size_request (identifiant2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (identifiant2), 8226);

  spinnle2_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinnle2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinnle2_adj), 1, 0);
  gtk_widget_show (spinnle2);
  gtk_fixed_put (GTK_FIXED (fixed3), spinnle2, 112, 184);
  gtk_widget_set_size_request (spinnle2, 60, 27);

  reclamation2 = gtk_entry_new ();
  gtk_widget_show (reclamation2);
  gtk_fixed_put (GTK_FIXED (fixed3), reclamation2, 168, 272);
  gtk_widget_set_size_request (reclamation2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (reclamation2), 8226);

  label17 = gtk_label_new (_("reclamation"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed3), label17, 56, 280);
  gtk_widget_set_size_request (label17, 97, 17);

  label20 = gtk_label_new (_("categorie"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 40, 416);
  gtk_widget_set_size_request (label20, 104, 17);

  label21 = gtk_label_new (_("id"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 112, 112);
  gtk_widget_set_size_request (label21, 41, 17);

  label22 = gtk_label_new (_("nle"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed3), label22, 56, 192);
  gtk_widget_set_size_request (label22, 41, 17);

  label23 = gtk_label_new (_("nbv"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed3), label23, 256, 192);
  gtk_widget_set_size_request (label23, 41, 17);

  label16 = gtk_label_new (_("Modifier Reclamation"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed3), label16, 272, 32);
  gtk_widget_set_size_request (label16, 145, 25);
  gtk_misc_set_alignment (GTK_MISC (label16), 0.46, 0.5);

  button_modifier2 = gtk_button_new ();
  gtk_widget_show (button_modifier2);
  gtk_fixed_put (GTK_FIXED (fixed3), button_modifier2, 552, 136);
  gtk_widget_set_size_request (button_modifier2, 104, 37);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button_modifier2), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label19 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label19);
  gtk_box_pack_start (GTK_BOX (hbox9), label19, FALSE, FALSE, 0);

  button_afficher2 = gtk_button_new ();
  gtk_widget_show (button_afficher2);
  gtk_fixed_put (GTK_FIXED (fixed3), button_afficher2, 552, 248);
  gtk_widget_set_size_request (button_afficher2, 104, 37);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (button_afficher2), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label18 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox8), label18, FALSE, FALSE, 0);

  combonbv2 = gtk_combo_box_new_text ();
  gtk_widget_show (combonbv2);
  gtk_fixed_put (GTK_FIXED (fixed3), combonbv2, 313, 185);
  gtk_widget_set_size_request (combonbv2, 51, 27);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("1"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("2"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("3"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("4"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("5"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("6"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("7"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("8"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("9"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combonbv2), _("10"));

  confirmer2 = gtk_check_button_new_with_mnemonic (_("confirmer"));
  gtk_widget_show (confirmer2);
  gtk_fixed_put (GTK_FIXED (fixed3), confirmer2, 208, 304);
  gtk_widget_set_size_request (confirmer2, 118, 24);

  categorie_faible2 = gtk_radio_button_new_with_mnemonic (NULL, _("faible"));
  gtk_widget_show (categorie_faible2);
  gtk_fixed_put (GTK_FIXED (fixed3), categorie_faible2, 176, 368);
  gtk_widget_set_size_request (categorie_faible2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (categorie_faible2), categorie_faible2_group);
  categorie_faible2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (categorie_faible2));

  categorie_moyen2 = gtk_radio_button_new_with_mnemonic (NULL, _("moyen"));
  gtk_widget_show (categorie_moyen2);
  gtk_fixed_put (GTK_FIXED (fixed3), categorie_moyen2, 176, 400);
  gtk_widget_set_size_request (categorie_moyen2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (categorie_moyen2), categorie_faible2_group);
  categorie_faible2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (categorie_moyen2));

  categorie_urgent2 = gtk_radio_button_new_with_mnemonic (NULL, _("urgent"));
  gtk_widget_show (categorie_urgent2);
  gtk_fixed_put (GTK_FIXED (fixed3), categorie_urgent2, 176, 432);
  gtk_widget_set_size_request (categorie_urgent2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (categorie_urgent2), categorie_faible2_group);
  categorie_faible2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (categorie_urgent2));

  g_signal_connect ((gpointer) button_modifier2, "clicked",
                    G_CALLBACK (on_button_modifier2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_afficher2, "clicked",
                    G_CALLBACK (on_button_afficher2_clicked),
                    NULL);
  g_signal_connect ((gpointer) confirmer2, "toggled",
                    G_CALLBACK (on_confirmer_toggled),
                    NULL);
  g_signal_connect ((gpointer) categorie_faible2, "toggled",
                    G_CALLBACK (on_faible_toggled),
                    NULL);
  g_signal_connect ((gpointer) categorie_moyen2, "toggled",
                    G_CALLBACK (on_moyen_toggled),
                    NULL);
  g_signal_connect ((gpointer) categorie_urgent2, "toggled",
                    G_CALLBACK (on_urgent_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifier_reclamation, modifier_reclamation, "modifier_reclamation");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, identifiant2, "identifiant2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, spinnle2, "spinnle2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, reclamation2, "reclamation2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label17, "label17");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label20, "label20");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label21, "label21");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label22, "label22");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label23, "label23");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label16, "label16");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, button_modifier2, "button_modifier2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, image9, "image9");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label19, "label19");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, button_afficher2, "button_afficher2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, image8, "image8");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, label18, "label18");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, combonbv2, "combonbv2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, confirmer2, "confirmer2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, categorie_faible2, "categorie_faible2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, categorie_moyen2, "categorie_moyen2");
  GLADE_HOOKUP_OBJECT (modifier_reclamation, categorie_urgent2, "categorie_urgent2");

  return modifier_reclamation;
}

GtkWidget*
create_statistique_reclamation (void)
{
  GtkWidget *statistique_reclamation;
  GtkWidget *fixed4;
  GtkWidget *treeview_stat_rec;
  GtkWidget *label24;
  GtkWidget *button_retour_stat;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label25;

  statistique_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (statistique_reclamation), _("Statistique"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (statistique_reclamation), fixed4);

  treeview_stat_rec = gtk_tree_view_new ();
  gtk_widget_show (treeview_stat_rec);
  gtk_fixed_put (GTK_FIXED (fixed4), treeview_stat_rec, 112, 72);
  gtk_widget_set_size_request (treeview_stat_rec, 352, 440);

  label24 = gtk_label_new (_("<span foreground=\"blue\" size=\"15000\">Nombre de reclamation par liste electorale</span>"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed4), label24, 72, 24);
  gtk_widget_set_size_request (label24, 416, 40);
  gtk_label_set_use_markup (GTK_LABEL (label24), TRUE);

  button_retour_stat = gtk_button_new ();
  gtk_widget_show (button_retour_stat);
  gtk_fixed_put (GTK_FIXED (fixed4), button_retour_stat, 8, 536);
  gtk_widget_set_size_request (button_retour_stat, 106, 37);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button_retour_stat), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-redo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label25 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label25);
  gtk_box_pack_start (GTK_BOX (hbox10), label25, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button_retour_stat, "clicked",
                    G_CALLBACK (on_button_retour_stat_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (statistique_reclamation, statistique_reclamation, "statistique_reclamation");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, treeview_stat_rec, "treeview_stat_rec");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, label24, "label24");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, button_retour_stat, "button_retour_stat");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, image10, "image10");
  GLADE_HOOKUP_OBJECT (statistique_reclamation, label25, "label25");

  return statistique_reclamation;
}

