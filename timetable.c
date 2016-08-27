#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
typedef struct period
{
    char sub[20];
    char lec[20];
    char room[10];
}period;
period a[5][21]={
        {
        {"ENV- S:5","M.S.Ali","Civil Semi"},//MONDAY
        {"SE","A.R.Surve","19"},
        {"PL-1","A.V.Terkhedkar","19"},
        {"DCN","P.S.Shedbalkar","20"},
        {"ENV","M.S.Ali","20"},
        {"S-1","DS","MINI"},
        "S-2","OFF","-",
        "S-3","PA","MINI",
        "S-4","DM","4",
        "S-5","SE","ASE",
        "S-6","OFF","-",
        "S-7","OFF","-",
        "S-8","PL-1","MINI",
        "S-1","DS","MINI",
        "S-2","OFF","-",
        "S-3","PA","MINI",
        "S-4","SE","ASE",
        "S-5","OFF","-",
        "S-6","ENV","Civil",
        "S-7","DM","4",
        "S-8","PL-1","MINI"},
        {
        "ENV- S:1","M.S.Ali","Civil Semi",//TUE
        "PA","S.L.Mahadeshwar","19",
        "SE","A.R.Surve","19",
        "PL-1","A.V.Terkhedkar","20",
        "DCN","P.S.Shedbalkar","20",
        "S-1","OFF","-",
        "S-2","SE","ASE",
        "S-3","PL-1","MINI",
        "S-4","PL-1","MINI",
        "S-5","DS","MINI",
        "S-6","PA","MINI",
        "S-7","DS","MINI",
        "S-8","PA","MINI",
        "S-1","OFF","-",
        "S-2","ENV","Civil",
        "S-3","PL-1","MINI",
        "S-4","PL-1","MINI",
        "S-5","DS","MINI",
        "S-6","PA","MINI",
        "S-7","DS","MINI",
        "S-8","PA","MINI",
        },
        {
        "-","-","-",                       //WED
        "DS","S.H.Bhandari","19",
        "DM","A.V.Terkhedkar","19",
        "DCN","P.S.Shedbalkar","20",
        "SE","A.R.Surve","20",
        "S-1","PA","MINI",
        "S-2","PL-1","MINI",
        "S-3","SE","ASE",
        "S-4","DS","MINI",
        "S-5","PL-1","MINI",
        "S-6","DM","4",
        "S-7","PA","MINI",
        "S-8","DS","MINI",
        "S-1","PA","MINI",
        "S-2","PL-1","MINI",
        "S-3","DM","4",
        "S-4","DS","MINI",
        "S-5","PL-1","MINI",
        "S-6","SE","ASE",
        "S-7","PA","MINI",
        "S-8","DS","MINI",
        },
        {
        "-","-","-",
        "PA","S.L.Mahadeshwar","19",
        "ENV","M.S.Ali","19",                   //THU
        "DM","A.V.Terkhedkar","20",
        "DS","S.H.Bhandari","20",
        "S-1","PL-1","MINI",
        "S-2","DS","MINI",
        "S-3","OFF","-",
        "S-4","PA","MINI",
        "S-5","OFF","-",
        "S-6","DS","MINI",
        "S-7","SE","ASE",
        "S-8","OFF","-",
        "S-1","PL-1","MINI",
        "S-2","DS","MINI",
        "S-3","OFF","-",
        "S-4","PA","MINI",
        "S-5","DM","4",
        "S-6","DS","MINI",
        "S-7","ENV","Civil",
        "S-8","SE","ASE",
        },
        {
        "-","-","-",
        "DM","A.V.Terkhedkar","19",
        "DS","S.H.Bhandari","19",
        "S:2-DM-4","S:3-ENV-Civil","",
        "PA","S.L.Mahadeshwar","20",                //FRI
        "S-1","SE","ASE",
        "S-2","PA","MINI",
        "S-3","DS","MINI",
        "S-4","OFF","-",
        "S-5","PA","MINI",
        "S-6","PL-1","MINI",
        "S-7","PL-1","MINI",
        "S-8","DM","4",
        "S-1","DM","4",
        "S-2","PA","MINI",
        "S-3","DS","MINI",
        "S-4","OFF","-",
        "S-5","PA","MINI",
        "S-6","PL-1","MINI",
        "S-7","PL-1","MINI",
        "S-8","ENV","Civil",
        }
    };


void print_day(int b,int d,int x,char *day_)
{
	day_[5]='\0';
        if(x==1)
        {
            if(d!=4)
            d++;
            else
            d=0;
        }
        if(strcmp(day_,"08:15")<=0||x)
        {printf("\nSub : %4s\tLec : %12s\tRoom : %4s",a[d][0].sub,a[d][0].lec,a[d][0].room);
          printf("\n-------------------Tea Break ---------------------");
        }
        if(strcmp(day_,"10:30")<=0||x)
        {printf("\nSub : %4s\tLec : %12s\tRoom : %4s",a[d][1].sub,a[d][1].lec,a[d][1].room);
          
        }
        if(strcmp(day_,"11:30")<=0||x)
 {    printf("\nSub : %4s\tLec : %12s\tRoom : %4s",a[d][2].sub,a[d][2].lec,a[d][2].room);

 }      
   if(strcmp(day_,"12:30")<=0||x)
  printf("\n-------------------Lunch Break -------------------");
  if(strcmp(day_,"13:30")<=0||x)
        printf("\nSub : %4s\tLec : %12s\tRoom : %4s",a[d][3].sub,a[d][3].lec,a[d][3].room);
        if(strcmp(day_,"14:30")<=0||x)
        printf("\nSub : %4s\tLec : %12s\tRoom : %4s",a[d][4].sub,a[d][4].lec,a[d][4].room);
          printf("\n-------------------Practicals  -------------------");
        if(strcmp(day_,"15:00")<=0 ||x)
        {
            if(b==1||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][5].sub,a[d][5].lec,a[d][5].room);
            if(b==2||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][6].sub,a[d][6].lec,a[d][6].room);
            if(b==3||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][7].sub,a[d][7].lec,a[d][7].room);
            if(b==4||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][8].sub,a[d][8].lec,a[d][8].room);
            if(b==5||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][9].sub,a[d][9].lec,a[d][9].room);
            if(b==6||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][10].sub,a[d][10].lec,a[d][10].room);
            if(b==7||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][11].sub,a[d][11].lec,a[d][11].room);
            if(b==8||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][12].sub,a[d][12].lec,a[d][12].room);
        }
        if(strcmp(day_,"17:00")<=0||x)
        {
            if(b==1||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][13].sub,a[d][13].lec,a[d][13].room);
            if(b==2||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][14].sub,a[d][14].lec,a[d][14].room);
            if(b==3||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][15].sub,a[d][15].lec,a[d][15].room);
            if(b==4||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][16].sub,a[d][16].lec,a[d][16].room);
            if(b==5||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][17].sub,a[d][17].lec,a[d][17].room);
            if(b==6||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][18].sub,a[d][18].lec,a[d][18].room);
            if(b==7||b==0)printf("\nSub : %4s\tPrac : %12s\tRoom : %4s",a[d][19].sub,a[d][19].lec,a[d][19].room);
            if(b==8||b==0)printf("\nSub : %4s\tPrac: %12s\tRoom : %4s",a[d][20].sub,a[d][20].lec,a[d][20].room);
        }
}
int main()
{
    time_t t;
    int st=0;
    char day[10],tm[10],_day[5][10]={"Mon","Tue","Wed","Thu","Fri"};
    char *ti;
    int batc=0;
    ti=(char *)malloc(27*sizeof(char));
    time(&t);
    strcpy(ti,ctime(&t));
    //printf("%s",ti);
    ti[4]='\0';
    strcpy(day,ti);
 //   printf("Day : %s\n",day);
    strcpy(ti,ctime(&t));
    ti+=11;
    ti[9]='\0';
     /*strcpy(ti,"20:59:00");
    ti[3]+=3;
    if(ti[3]>='6')
    {
        ti[3]-=6;
        ti[1]+=1;
    }

    ti[1]+=5;

    if(ti[1]>'9')
    {
        ti[0]++;
        ti[1]-=10;
    }

    if(ti[0]=='2'&&ti[1]>='4')
    {
        ti[1]-=4;
        ti[0]='0';
        st=1;
    }
*/
    day[3]='\0';
    printf("Day : %s\nUpcoming lectures from Time : %s\n",day ,ti);
    
    char bat;int cnt=0;
    printf("\nWould You like to see your batch's Practical then  Enter  your Batch\tOR \tother's also then  Enter 0");
      do{
        if(cnt>0)
        printf("\nIncorrect Option ");
        printf("\nEnter Your Option : S - ");
        scanf("%d",&batc);
        cnt++;
        }while(batc>8||batc<1);

    if(strcmp(ti,"17:30:00")>0)
    {st=1;}
    if(strcmp(day,"Mon")==0)
    {
        if(st==0)
            print_day(batc,0,0,ti);
        else
            print_day(batc,0,1,ti);
    }
    else if(strcmp(day,"Tue")==0)
    {
        if(st==0)
            print_day(batc,1,0,ti);
        else
            print_day(batc,1,1,ti);
    }
   else if(strcmp(day,"Wed")==0)
    {
        if(st==0)
            print_day(batc,2,0,ti);
        else
            print_day(batc,2,1,ti);
    }
   else if(strcmp(day,"Thu")==0)
    {
        if(st==0)
            print_day(batc,3,0,ti);
        else
            print_day(batc,3,1,ti);
    }
   else if(strcmp(day,"Fri")==0)
    {
        if(st==0)
            print_day(batc,4,0,ti);
        else
            print_day(batc,4,1,ti);
    }

printf("\n");
return 0;
}