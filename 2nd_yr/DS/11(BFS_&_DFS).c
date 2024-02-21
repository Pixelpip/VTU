#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
int a[50][50], n, visited[50];
int q[20], front = -1,rear = -1;
int s[20], top = -1, count=0;
void bfs(int v)
{
int i, cur;
visited[v] = 1;
q[++rear] = v;
while(front!=rear)
{
 cur = q[++front];
for(i=1;i&lt;=n;i++)
{
if((a[cur][i]==1)&amp;&amp;(visited[i]==0))
{
q[++rear] = i;
 visited[i] = 1;
 printf(&quot;%d &quot;, i);
}
}
}
}
void dfs(int v)
{
int i;
visited[v]=1;
s[++top] = v;
for(i=1;i&lt;=n;i++)
{
if(a[v][i] == 1&amp;&amp; visited[i] == 0 )
{
printf(&quot;%d &quot;, i);
dfs(i);
}
}
}
int main()
{

int ch, start, i,j;
printf(&quot;\nEnter the number of vertices in graph:  &quot;);
scanf(&quot;%d&quot;,&amp;n);
         printf(&quot;\nEnter the adjacency matrix:\n&quot;);
         for(i=1; i&lt;=n; i++)
         {
                for(j=1;j&lt;=n;j++)
                        scanf(&quot;%d&quot;,&amp;a[i][j]);
 }
 for(i=1;i&lt;=n;i++)
           visited[i]=0;
    printf(&quot;\nEnter the starting vertex: &quot;);
    scanf(&quot;%d&quot;,&amp;start);
        printf(&quot;\n==&gt;1. BFS: Print all nodes reachable from a given starting node&quot;);
        printf(&quot;\n==&gt;2. DFS: Print all nodes reachable from a given starting node&quot;);
        printf(&quot;\n==&gt;3:Exit&quot;);
        printf(&quot;\nEnter your choice: &quot;);
        scanf(&quot;%d&quot;, &amp;ch);
        switch(ch)
        {
            case 1: printf(&quot;\nNodes reachable from starting vertex %d are: &quot;, start);
                    bfs(start);
                    for(i=1;i&lt;=n;i++)
                    {
                        if(visited[i]==0)
                            printf(&quot;\nThe vertex that is not reachable is %d&quot; ,i);
                    }
                    break;
            case 2: printf(&quot;\nNodes reachable from starting vertex %d are:\n&quot;,start);
                    dfs(start);
                    break;
           case 3: exit(0);
           default: printf(&quot;\nPlease enter valid choice:&quot;);
        }
}