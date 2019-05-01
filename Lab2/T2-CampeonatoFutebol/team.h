#ifndef TEAM_H
#define TEAM_H
#include "lseVoid.h"
#include "player.h"

typedef struct
{
    char name[50], home[50], city[50];
    int id_team, d, m, y;
    int points, fault, card_y, card_r, quanty_players, goal_done, goal_conceded;
    Node *players, *selection;
} Team;

Team *createTeam(char name[50], char home[50], char city[50], int d, int m, int y, int id_team);
Team *searchTeam(Node *teams, int id);
Node *removeTeam(Node *teams, int id);
void printDataTeam(void *team);
void printTeam(void *team);
void showDataTeam(Node *team);
void printRank(void *team);
void showRank(Node *head);
void showTeams(Node *head);
void readTeam(Node *teams, Node *player, Node *coach, Node *match, Node *round);
void registerPlayer(Team *team, Player *player);
void unregisterPlayer(Team *team, int id);

#endif