#include <iostream>
#include <vector>
using namespace std;

void makeVect(vector<int> &teams, int nOfTeams, int limitPerSchool) {
  int id, school;
  // value to compare if team has same school as previous
  int preSchool = 0;

  // value to count how many teams each school has
  int schoolTeams = 0;

  // accepting inputs
  cin >> id >> school;

  // adding id of the first team to the vector
  teams.push_back(id);
  preSchool = school;
  schoolTeams++;

  for (int i = 1; i < nOfTeams; i++) {
    cin >> id >> school;

    if (school == preSchool) {
      schoolTeams++;
      if (schoolTeams <= limitPerSchool)
        teams.push_back(id);
    } else {
      schoolTeams = 1;
      teams.push_back(id);
    }
    preSchool = school;
  }
}

int main() {
  int nOfTeams, teamsToAdv, limitPerSchool;
  cin >> nOfTeams >> teamsToAdv >> limitPerSchool;

  vector<int> teams;
  makeVect(teams, nOfTeams, limitPerSchool);

  for (int i = 0; i < teamsToAdv; i++) {
    cout << teams[i] << endl;
  }
}
