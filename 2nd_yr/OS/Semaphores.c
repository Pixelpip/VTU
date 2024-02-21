#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int mutex = 1;
int full = 0;
int empty = 3;
int x = 0;

void producer() {
--mutex;
++full;
--empty;
x++;
printf(&quot;\nProducer produces item %d&quot;, x);
++mutex;
}

void consumer() {
--mutex;
--full;
++empty;
printf(&quot;\nConsumer consumes item %d&quot;, x);
x--;

++mutex;
}

int main() {
int n, i;
for (i = 1; i &gt; 0; i++) {
printf(&quot;\n1. Press 1 for Producer\n2. Press 2 for Consumer\n3.
Press 3 for Exit&quot;);
printf(&quot;\nEnter your choice:&quot;);
scanf(&quot;%d&quot;, &amp;n);

switch (n) {
case 1:
if ((mutex == 1) &amp;&amp; (empty != 0)) {
producer();
} else {
printf(&quot;Buffer is full!&quot;);
}
break;

case 2:
if ((mutex == 1) &amp;&amp; (full != 0)) {
consumer();
} else {
printf(&quot;Buffer is empty!&quot;);

}
break;

case 3:
exit(0);
break;

default:
printf(&quot;Invalid choice!&quot;);
break;
}
}

return 0;
}