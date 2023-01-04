#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;  // read the number of lines in the description

    // create a dictionary to store the goal counts for each team
    std::unordered_map<std::string, int> goal_counts;

    // read the description line by line and update the goal counts
    for (int i = 0; i < n; i++) {
        std::string line;
        std::cin >> line;  // read the name of the team that scored a goal
        if (goal_counts.find(line) == goal_counts.end()) {
            // if this is the first time we've seen this team, initialize their goal count to 0
            goal_counts[line] = 0;
        }
        // increment the goal count for this team
        goal_counts[line]++;
    }

    // find the team with the highest goal count
    std::string winner;
    int max_goals = 0;
    for (const auto& [team, goals] : goal_counts) {
        if (goals > max_goals) {
            // this team has scored more goals than any other team seen so far, so they are the new winner
            winner = team;
            max_goals = goals;
        }
    }

    // print the name of the winning team
    std::cout << winner << std::endl;
    return 0;
}
