#include<stdio.h>
main() {
	int i;
	int start,end,ch;
	printf("\n Press 1 For Forward Loop\n");
	printf("\n Press 2 For Reverse Loop\n");
	scanf("%d %d",&start,&end);
	switch(ch){
		case 1:
			if(start<end){
				for(i=start;i<=end;i++){
					printf("\n i%d",i);
				}
			    }
			    else{
			    	printf("\n Enter Valid Range");
				}
				break;
	    case 2:
	    	if(start>end){
	    		for(i=start;i>=end;i--){
				}
	    	}
	        
	        else {
	    		printf("\n Enter Valid Range");
	    	} 
	    	break;
	    	default:
	    		printf("\n Wrong Choice");
	    	break;
					
	}
}
