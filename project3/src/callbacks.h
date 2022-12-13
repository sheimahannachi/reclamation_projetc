#include <gtk/gtk.h>


void
on_treeview_row_activated              (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_chercher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_faible_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_moyen_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_urgent_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_confirmer_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkButton       *objet,
                                        gpointer         user_data);

void
on_button_actualiser_rec_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_modifier2_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_afficher2_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_statistique_rec_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour_stat_clicked          (GtkButton       *button,
                                        gpointer         user_data);
