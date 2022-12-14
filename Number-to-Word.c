#include<stdio.h>
main()
{
  char *words[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fiveteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    int num,i,j=1,k,p;
    printf("Enter integer to get converted into words\n");
     scanf("%d",&num);
    
    
   if(num>=100)
    {
      for(;j<20;j++)
            {if(num/1000==j&&j<=19)
          {printf("%s thousand ",words[j-1]);
        break;}}
            switch(j=num/10000)
           { case 2:
             {for(k=1;k<10;k++)
            {if(num/1000<30&&num/1000>=20&&num/1000!=20&&(num/1000)%10==k)
       {printf("Twenty %s thousand ",words[k-1]);
            break;}
            else if( num/1000==20 )
            {printf("%s thousand ",words[19]);
                break;}}
                break;}
              
           case 3:
            {for(k=1;k<10;k++)
            {
                if(num/1000<40&&num/1000>=30&&num/1000!=30&&(num/1000)%10==k)
       {printf("Thirty %s thousand ",words[k-1]);
                break;}
                   else if(num/1000==30)
           { printf("%s thousand ",words[20]);
                break;}
               }
              break; }
          case 4:
            {for(k=1;k<10;k++)
            {if(num/1000<50&&num/1000>=40&&num/1000!=40&&(num/1000)%10==k)
      { printf("Fourty %s thousand ",words[k-1]);
                break;}
                  else if(num/1000==40) 
           { printf("%s thousand ",words[21]);
                break;}}
              break; }
        case 5:
            {for(k=1;k<10;k++)
            {if(num/1000<60&&num/1000>=50&&num/1000!=50&&(num/1000)%10==k)
       {printf("Fifty %s thousand ",words[k-1]);
                break;}
                  else if(num/1000==50) 
           { printf("%s thousand ",words[22]); 
                break;}
            }
             break;  }
        case 6:
            {for(k=1;k<10;k++)
            {if(num/1000<70&&num/1000>=60&&num/1000!=60&&(num/1000)%10==k)
       { printf("Sixty %s thousand ",words[k-1]);
                break;}
                 else if(num/1000==60) 
           {printf("%s thousand ",words[23]);
                break;}}
            break;   }
           case 7:
            {for(k=1;k<10;k++)
            {if(num/1000<80&&num/1000>=70&&num/1000!=70&&(num/1000)%10==k)
    { printf("Seventy %s thousand ",words[k-1]);
                break;}
          else if(num/1000==70) 
           { printf("%s thousand ",words[24]); 
                break;}}  
                 break;}
        case 8:
            {for(k=1;k<10;k++)
            {if(num/1000<90&&num/1000>=80&&num/1000!=80&&(num/1000)%10==k)
     { printf("Eighty %s thousand ",words[k-1]);
                break;}
              else if(num/1000==80) 
       {printf("%s thousand ",words[25]); 
                break;}}
              break; }
      case 9:
            {for(k=1;k<10;k++)
            {if(num/1000<100&&num/1000>=90&&num/1000!=90&&(num/1000)%10==k) 
      {printf("Ninety %s thousand ",words[k-1]);
               break;}
              else if(num/1000==90) 
          {  printf("%s thousand ",words[26]);
               break;}} }}
         for(k=1;k<10;k++)
    {if(num>=10000&&num%1000/100==k||num>=100&&num/100==k||num%1000/100==k)
 { printf("%s hundred ",words[k-1]);
                
            break;}}}
            
                
        
        
        
      for(k=11;k<20;k++)
   {if((num%100)==k&&num%10!=0)
         { printf("%s",words[k-1]);
        break;}
       else if(num%100/10==0||num%100%10==0)
       {for(k=1;k<10;k++)
        {if(num%100%10==k)
        {printf("%s",words[k-1]);
        break;}
          else if(num%100%10==0&&num%100!=0)
        {printf("%s",words[9]);
            break;}}}
            if(num%100/10==0||num%100%10==0)
           break;}
      
        
        
    switch(j=num%100/10)
        {
            case 2:{
        for(k=1;k<10;k++)
    {if((num%100<30)&&num%100>=20&&num%100!=20&&(num%100%10)==k&&num%10!=0)
         { printf("twenty %s",words[k-1]);
            break;}
      else if(num%100==20)
       { printf("%s",words[19]);
            break; }}
                break;}
        case 3:{
            
        for(k=1;k<10;k++)
     {if((num%100<40)&&num%100>=30&&num%100!=30&&(num%100%10)==k&&num%10!=0)
         { printf("thirty %s",words[k-1]);
            break;}
      else if(num%100==30)
       { printf("%s",words[20]);
            break; }}
                break;}
case 4:{
        for(k=1;k<10;k++)
    {if((num%100<50)&&num%100>=40&&num%100!=40&&(num%100%10)==k&&num%10!=0)
         { printf("forty %s",words[k-1]);
            break;}
      else if(num%100==40)
       { printf("%s",words[21]);
            break; }}
               break;}
    case 5:{
        for(k=1;k<10;k++)
    {if((num%100<60)&&num%100>=50&&num%100!=50&&(num%100%10)==k&&num%10!=0)
         {printf("fifty %s",words[k-1]);
            break;}
      else if(num%100==50)
       { printf("%s",words[22]);
            break; }}
                break;}
    case 6:{
        for(k=1;k<10;k++)
    {if((num%100<70)&&num%100>=60&&num%100!=60&&(num%100%10)==k&&num%10!=0)
         { printf("sixty %s",words[k-1]);
            break;}
      else if(num%100==60)
       { printf("%s",words[23]);
            break; }} 
                break;}
    case 7:{
        for(k=1;k<10;k++)
    {if((num%100<80)&&num%100>=70&&num%100!=70&&(num%100%10)==k&&num%10!=0)
          {printf("seventy %s",words[k-1]);
           break;}
      else if(num%100==70)
       { printf("%s",words[24]);
            break; }}
                break;}
case 8:{
        for(k=1;k<10;k++)
    {if((num%100<90)&&num%100>=80&&num%100!=80&&(num%100%10)==k&&num%10!=0)
        { printf("eighty %s",words[k-1]);
            break;}
      else if(num%100==80)
       { printf("%s",words[25]);
            break; }}
                break;}
    case 9:{
        for(k=1;k<10;k++)
    {if((num%100<100)&&num%100>=90&&num%100!=90&&(num%100%10)==k&&num%10!=0)
          {printf("ninety %s",words[k-1]);
            break;}
      else if(num%100==90)
       { printf("%s",words[26]);
            break; }}
               break;}
}}