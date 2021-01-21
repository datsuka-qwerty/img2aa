#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int t = 0;
	int i = 1;
	FILE *fp = NULL;
	char  buf[1024];

	int microsecond = 1 * 1000000;

	printf("");     scanf("%d", &t);

	system("clear");
	printf("\x1b[49m");
	printf("\x1b[7m");

	while(1)
	{
		char cmd[1024];
		sprintf(cmd, "jp2a --height=100 --background=light img/%d.jpg", i);
		if ((fp = popen(cmd, "r")) != NULL)
		{
			usleep(microsecond);
			system("clear");

			while (fgets(buf, sizeof(buf), fp) != NULL)
			{
				printf("%s", buf);
			}
			pclose(fp);

			i = i + 1;
		}
		else if ((fp = popen(cmd, "r")) == NULL)
		{
			return -1;
		}
		if (i == t)
		{
			i = 1;
		}
		else
		{
			i = i + 1;
		}
	}

	/* debug-出力したい内容
																																																							 ..;cldxkOOOOkxoc;'.                                                                                                        
																																																					':ok0XXXXXXXXXXXXXXXXXXX0xl,.                                                                                                   
																																																			'lOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOl'                                                                                                
																																																	 .oKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0l.                                                                                             
																																																 'kXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo                                                                                            
																																															 .dXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0'                                                                                          
																																															,0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXl                                                                                         
																																														 :XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXd                                                                                        
																																														'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXo                                                                                       
																																														OXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX:                                                                                      
																																													 cXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK.                                                                                     
																																													 0XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXd                                                                                     
																																													,XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.                                                                                    
																																													oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX:                                                                                    
																																													kXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKd:'...,lkXXXXXXXXXXXXXXXXXXXd                                                                                    
																																													0XXXXXXk:'..,l0XXXXXXXXXXXXXO;          .lKXXXXXXXXXXXXXXXX0                                                                                    
																																												 .XXXXX0'        ;KXXXXXXXXXXc              .OXXXXXXXXXXXXXXXX.                                                                                   
																																												 .XXXX0.          .KXXXXXXXXl                .0XXXXXXXXXXXXXXX'                                                                                   
																																												 .XXXX;     '.     ,XXXXXXX0      ,x0Kk:      ,XXXXXXXXXXXXXXX;                                                                                   
																																													KXXK    ,KXXO.    OXXXXXXl     oXXXXXXx      0XXXXXXXXXXXXXXc                                                                                   
																																													OXX0    KXXXXO    dXXXXXXc    'XXXXXXXX,     kXXXXXXXXXXXXXXc                                                                                   
																																													xXXX.  .XXXXXX, .'kXXXXXXx'.  :XXXXXXXX:     0XXXXXXXXXXXXXXl                                                                                   
																																													oXXXc   kXXXXXkkxc,..  ..':okkOXXXXXXXX.    ,XXXXXXXXXXXXXXXl                                                                                   
																																													cXXXK'  .OXXXx;  ..     .'.  .;dKXXXXK;    .0XXXXXXXXXXXXXXXc                                                                                   
																																													;XXXXK: .cKo.   :l'     .,l,     .:okko:' .kXXXXXXXXXXXXXXXXc                                                                                   
																																													,XXXXXX0k:                            .,cxKXXXXXXXXXXXXXXXXXc                                                                                   
																																													,XXXX0l.                                   ;0XXXXXXXXXXXXXXXc                                                                                   
																																													:XXK;                                 .l,   .0XXXXXXXXXXXXXXo                                                                                   
																																													dXXd  xl                            .od'     kXXXXXXXXXXXXXX0                                                                                   
																																													0XXK.  ;x:                       .:dc.      :XXXXXXXXXXXXXXXX,                                                                                  
																																												 ,XXXXK:   'll'                .,cc:.       .dkkXXXXXXXXXXXXXXXO                                                                                  
																																												 kXXXXXX0l.   ;ll:'.      .':cl:.        .;xk; .XXXXXXXXXXXXXXXXd                                                                                 
																																												;XXXXXXXl;dkc.   .':cc::cc;'.        .:okxc.    oXXXXXXXXXXXXXXXXl                                                                                
																																											 .0XXXXXXX'   ;kd'                 .:dxl,.         0XXXXXXXXXXXXXXXXo                                                                               
																																											 OXXXXXXX0      .dOc.           'lkx;.             ,XXXXXXXXXXXXXXXXXx                                                                              
																																											xXXXXXXXXl         ;dxdlc::cldxxc'                  oXXXXXXXXXXXXXXXXX0.                                                                            
																																										.kXXXXXXXXK.             ......                        OXXXXXXXXXXXXXXXXXK:                                                                           
																																									 .OXXXXXXXXXl                                            .KXXXXXXXXXXXXXXXXXXk.                                                                         
																																									'0XXXXXXXXX0                                              ;XXXXXXXXXXXXXXXXXXXKc                                                                        
																																								.oXXXXXXXXXXX,                                               dXXXXXXXXXXXXXXXXXXXXO'                                                                      
																																							 cKXXXXXXXXXXXd                                                 OXXXXXXXXXXXXXXXXXXXXXx.                                                                    
																																						 .OXXXXXXXXXXXXK.                                                 .KXXXXXXXXXXXXXXXXXXXXXK;                                                                   
																																						lXXXXXXXXXXXXXX,                                                   ,XXXXXXXXXXXXXXXXXXXXXXXx.                                                                 
																																					.OXXXXXXXXXXXXXXc                                                     :XXXXXXXXXXXXXXXXXXXXXXXXc                                                                
																																				 :KXXXXXXXXXXXXXXd                                                       lXXXXXXk,dXXXXXXXXXXXXXXXk.                                                              
																																			 .kXXXXXXX0XXXXXXXx                                                         oXXXXXXKc,dXXXXXXXXXXXXXXK:                                                             
																																			;KXXXXXXK;kXXXXXXO                                                           oXXXXXXXK:,0XXXXXXXXXXXXXXd                                                            
																																		 oXXXXXXX0'xXXXXXX0.                                                            oXXXXXXXXd.dXXXXXXXXXXXXXXk.                                                          
																																		xXXXXXXXk.xXXXXXX0.                                                              oXXXXXXXXO.;KXXXXXXXXXXXXX0.                                                         
																																	.OXXXXXXXk.OXXXXXXK.                                                                dXXXXXXXXK,.OXXXXXXXXXXXXXK,                                                        
																																 .0XXXXXXXk.xXXXXXXX,                                                                  dXXXXXXXXK,.OXXXXXXXXXXXXXX;                                                       
																																'KXXXXXXXx.dXXXXXXX;                                                                    oXXXXXXXXK'.kXXXXXXXXXXXXXX:                                                      
																															 ,XXXXXXXXk oXXXXXXX:                                                                      dXXXXXXXX0..0XXXXXXXXXXXXXX;                                                     
																															,KXXXXXXX0.,XXXXXXXc                                                                        kXXXXXXXXo ;XXXXXXXXXXXXXXK.                                                    
																														 'KXXXXXXXK..0XXXXXXo                                                                         .0XXXXXXXK. xXXXXXXXXXXXXXXO                                                    
																														.KXXXXXXXXc lXXXXXXk                                                                           'XXXXXXXXc .XXXXXXXXXXXXXXXl                                                   
																														xXXXXXXXXO  0XXXXXK.                                                                            lXXXXXXXd  kXXXXXXXXXXXXXXX.                                                  
																													 :XXXXXXXXX: 'XXXXXXc                                                                              OXXXXXXx  cXXXXXXXXXXXXXXXx                                                  
																													.KXXXXXXXXK. :XXXXXO                                                                               ;XXXXXXd  ;XXXXXXXXXXXXXXXX.                                                 
																													xXXXXXXXXXk  :XXXXX;                                                                                0XXXXX:  ,XXXXXXXXXXXXXXXXl                                                 
																												 'XXXXXXXXXXx  'XXXX0                                                                                 cXXXX0   cXXXXXXXXXXXXXXXXO                                                 
																												 dXXXXXXXXXXk   0XXXo                                                                                  ,;:l'   xXXXXXXXXXXXXXXXXX.                                                
																												 KXXXXXXXXXXK   :xxx;                                                                                          ;o0XXXXXXXXXXXXXXX.                                                
																												,XXXXXXXXXXXX:   oXX.                                                                              .ck0XXK0Oxl;.  .;o0XXXXXXXXXXX.                                                
																												:XXXXXXXXXXXXK.   oK                                                                              :XXXXXXXXXXXXXXkl'  ,dXXXXXXXXX.                                                
																												cXXXXXXXXXXXXXO.   '                                                                             .XXXXXXXXXXXXXXXXXXKd' .dXXXXXXO                                                 
																												:XXXXXXXXXXXXXX0,                                                                              .;xXXXXXXXXXXXXXXXXXXXXXO, ;XXXXXl                                                 
																												'XXXXXXXXXXXXXXXXx.                                                                          ;OXXKXXXXXXXXXXXXXXXXXXXXXXX, xXXXK.                                                 
																											 .xXXx,.   .'ckXXXXXXd.                                                                      .kX0:.;XXXXXXXXXXXXXXXXXXXXXXXc kXXXo                                                  
																										 .dXXo.          .lKXXXXXOc.                                                                  'KXd    0XXXXXXXXXXXXXXXXXXXXXXKKXXXXo'                                                 
																										,KXk.              .oXXXXXXX0o'                                                              .KXx     'KXXXXXXXXXXXXXXXXXX0:,'',,cdKXKl.                                              
																									 oXXc                  ,KXXXXXXXX0c.                                                           dXK.      'KXXXXXXXXXXXXXXXk;          ,OXK'                                             
																							 .,oKXx.                    .0XXXXXXXXXXx;                                                        .XXl        .lKXXXXXXXXX0d;.              dXK.                                            
																					.;lxKXXOl.                       .0XXXXXXXXXXXKl.                                                     lXX.           .:lllc;'.                   OXx                                            
																			 ,d0XXOo:'.                           .0XXXXXXXXXXXXKl                                                    kXO                                        ,XX.                                           
																		 ;0X0c'                                  .kXXXXXXXXXXXXX0;                                                  KXd                                         OXd                                           
																		cXX:                                       xXXXXXXXXXXXXXXx.                                               .XXc                                         ;XX'                                          
																	 .XXc                                         dXXXXXXXXXXXXXX0.                                              ,XX;                                          kXO.                                         
																	 ;XX.                                          lXXXXXXXXXXXXXXO                                              :XX'                                          .OX0,                                        
																	 ,XX.                                           ,KXXXXXXXXXXXXX;                                             lXX.                                            cKXk.                                      
																	 .XX;                                            .kXXXXXXXXXXXX'                                             kXO                                              .xXXc                                     
																		kXd                                              cKXXXXXXXXO,                                             'XXc                                                ;KXo                                    
																		lXK                                               .dXXKo:,.                                               kX0                                                  .KXl                                   
																		:XX.                                                ,0X0'                                                ,XX:                                                   cXK                                   
																		cXX.                                                  lKXl                                               kXk                                                    lXK                                   
																		0Xd                                                    .OXO.                                          .l0XX.                                                  .oXK,                                   
																	 lX0.                                                      xXXo'                                    .;o0XXXXo                                                .;xXXk.                                    
																	.KXc                                                        cXXXKd:.                            .;oOXXXXXXXK.                                            .;oOXXkc.                                      
																	;XX.                                                         :XXXXXXKko:,.               .';lxOXXXXXXXXXXXXo                                         .:d0XXOl'                                          
																	;XX.                                                          oXXXXXXXXXXXXK0kkxxxxxkk0KXXXXXXXXXXXXXXXXXXX,                                      ,o0XXOo,.                                             
																	.0Xo                                                          .XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK                                   .;xKXOl,.                                                 
																	 .OX0c.                                                       .XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXO                                 'dXXOc.                                                     
																		 :xKXX0xolc:;'...                                           :XXXXXXXXXXXXXXXXK0OOkkkOO0KXXXXXXXXXXXXXXXX0                               .xXXd.                                                        
																				.,:loxkO0KXXXXX0Okdoc,.                                .KXXXK0kxdlc;,..              ...,;::clloolxXX'                            .oXKl.                                                          
																										..',:coxOXXX0d:.                          ;KXd                                         kXO.                         .oXXx.                                                            
																															.,lkKXKd:'                    ,kXK:                                           xX0,                      ,xXXx'                                                              
																																	 .cd0XX0xoc;'........':lxKXk:                                              :KXx,                .,o0XOc.                                                                
																																				';ldOKXXXXXXXXXX0kl;.                                                  c0XKd:'.      .,:dOXXOl.                                                                   
																																							 ........                                                          .cx0XXXKKKKXXX0kl;.                                                                      
																																																																										 .coxxxdl;.                                                                           

	*/
}
