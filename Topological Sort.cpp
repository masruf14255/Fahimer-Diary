

// topological sort

int taken[55] = {};
int n, take[55][55], list[55] indegree[55];
int i, j, k;

// when take[a][b] = 1, that means a must come before b
// indegree[i] = number of items that that must come before i
// when taken[i] = 1, means we already have taken ith item
int invalid = 0;
for(i=0; i<n; i++) {
    for(j=0; j<n; j++) if( !indegree[j] && !taken[j]    ) {
        taken[j] = 1;
        list[i] = j;
        // in this step we are taking item j
        // we'd update the indegree[k] of items that depended on j
        for(k=0; k<n; k++)
            if( !taken[k] && take[j][k] ) --indegree[k];
        break;
    }
    if( j == n ) {
        invalid = 1;
        break;
    }
}

if( invalid ) printf("There is no solution\n");
else for(i=0; i<n; i++) printf("%d\n", list[i] );


//dfs

#define M 55
vector<int> ans, depends[M];
int taken[M];

// depends[i] contains all the items that item i is depending on
// when taken[i] = 1, that means it's already taken

void take( int p ) {
    if( !taken[ p ] ) {
        // i am taking all the items that i should take before p
        for(int i=0; i<depends[p].size(); i++)
            take( depends[p][i] );
        ans.push_back( p ); // now i can take it
        taken[p] = 1;
    }
}

int main() {
    // input routine
    // .....

    for(int i=0; i<n; i++) take( i );
    for(int i=0; i<n; i++) printf("%d\n", ans[i] );

    return 0;
}

// node to node dfs

#define M 55
int visited[M], cycle = 0;
vector<int> edge[M];

void visit( int p ) {
    if( visited[p] == 2 || cycle ) return;
    // we won't process anything if we already have found a cycle
    if( visited[p] == 1 ) {
        cycle = 1; // found cycle
        return;
    }

    visited[p] = 1;
    for(int i=0; i<edge[p].size(); i++) visit( edge[p][i] );
    visited[p] = 2;
}
