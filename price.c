    #include <stdio.h>
    int     main()
    {
        int n;
        float gst,dis,p,net,tamt;
        printf("**************************** \n");
        printf("Enter the # quantity:");
        scanf("%d",&n);
        printf("Enter the price per item:");
        scanf("%f",&p);
        printf("**************************** \n");
        tamt=n*p;
        gst=(tamt*18)/100;
        if(n>200)
        {
            dis=(tamt*20)/100;
            net=(tamt-dis)+gst;
            printf("Quantity: %d \n",n);
            printf("Price per item: %.1f \n",p);
            printf("Total Amount: %.1f \n",tamt);
            printf("GST: %.1f \n",gst);
            printf("Discount: %.1f \n",dis);
            printf("Net Payable: %.1f \n",net);
        }   
        else
        {
            net=tamt+gst;
            printf("No. of item: %d \n",n);
            printf("Price: %.1f \n",p);
            printf("Total Amount: %.1f \n",tamt);
            printf("GST: %.1f \n",gst);
            printf("Net Payable: %.1f \n",net);
        }
    }