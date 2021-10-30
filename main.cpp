#include <iostream>
#include <vector>


using namespace std;


//Global Variables
vector<int> assignments;
vector<int> rPlus;
void print_no_message(){
    //print No
    //print [rPlus]
};
void print_yes_message(){
    //print Yes
    //print [assignments]
};


int main(){
    /* Setup - Here, we'll setup the residual graph for use */
    //take in information
    //create the residual graph  
    //do the preliminary assignments and set the nodes accordingly
    //create a vector<int> [assignments] = [size: number of candiates] and set assignments[candidate  #] = {recruiter #},  according to the assignments

    /*
        BFS
        1. Alter bfs to take in the class RGraph instead of just the graph
        2. After the first if which checks if it hasnt been 
            visited, Add in a clause that says if the node 
            popped is a candidate node and it points 
            to a recruiter, 

            1. WILL FOR YES MESSAGE - then 
            assignments[candidate #] = {recruiter # that it points to}. 

            2. WILL USE FOR NO MESSAGE - then rPlus[recruiter #] = 1 (i.e true that we should increment by 1)
    */
    //do bfs on that residual graph check the ff notes 

    //if bfs returns true, then
        //print_yes_message
    //if bfs returns no, then 
        //print_no_message

        
}
