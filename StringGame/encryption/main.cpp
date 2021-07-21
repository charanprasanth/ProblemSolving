// a b c     d e    f   g     h   i  j   k    l    m  n    
//97 98 99 100 101 102  103 104 105 106 107 108 109 110 
// o   p   q   r   s   t   u   v   w    x   y z
//111 112 113 114 115 116 117 118 119 120 121 122 
#include<stdio.h>
int main ()
{
  int count = 0, ind, len, sum;
  char str[100], ans[100];
  scanf ("%[^\n]s", str);	// yum feed 
  for (len = 0; str[len] != '\0'; len++);
  for (ind = len - 1; ind >= 0; ind--)
    {
      sum = 0;
      if (str[ind] != ' ')
	{
	  sum = str[ind] + count;	// d ,e+1=f ,e+2=g ,f+3=i , m+0=m ,u+1=v,121+2 =123  
	  if (sum > 122)	//100>122 102>122 103>122 105>122 109>122 118>122 123>122
	    {
	      sum = sum - 26;	// 123-26 =97 
	    }
	  ans[ind] = sum;
	  count++;		// 0 ->1 ->2 
	}
      else if (str[ind] == ' ')
	{
	  ans[ind] = ' ';
	  count = 0;
	}
    }
  ans[len] = '\0';
  printf ("%s", ans);
}

