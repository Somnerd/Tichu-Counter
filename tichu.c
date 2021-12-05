#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Teams {
  int points;
  char *name;
  int  grant; // 0 = No grant , 1 = lost grand , 2 = won grand
  int tichu;  // 0 = No tichu , 1 = lost tichu , 2 = won tichu
  bool onetwo; // 0 = No double , 1 = Double
}Teams;

int team_name() {

    struct Teams Team1;
    struct Teams Team2;

    printf("Name of Team1 (blank for default) :");
    scanf("%s",&Team1.name);
    if (Team1.name == NULL) {
      Team1.name = "Team1";
    }

    printf("Name of Team2 (blank for default) :");
    scanf("%s",&Team2.name);
    if (Team1.name == NULL) {
      Team1.name = "Team2";
    }
    return 0;
}

int main(){
  int total_points = 125;
  char in[16];

  struct Teams Team1;
  struct Teams Team2;

  Team1.name = "A";
  Team2.name = "B";
  Team1.points = (int*) malloc( sizeof(int));
  //team_name();

  printf("Points for team A :");
  scanf("%d",&Team1.points);

  printf("Points Team A : %d \n"
         "Points Team B : %d \n"
         ,Team1.points,125 - (Team1.points) );

    //main();
  return 0;
}
