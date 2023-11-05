if(month == 1)
                {
                    printf("\t  january %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }