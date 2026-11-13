/* LEVEL_23:0x09D440 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_09D710(unsigned int);
extern char *func_09D9C8(int,unsigned int,unsigned int);
extern char *func_123410(char *,char *,char *,unsigned int);
extern unsigned char D_1C9CEA,D_1C9CE9;
extern char D_2EE9A0[],D_2C6170[];
int func_09D440(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_09D710(a)||!D_1C9CEA)return 0;
 if(!D_1C9CE9)return 1;
 name=func_09D9C8(2,a,b);
 ok=func_123410(D_2EE9A0,name,D_2C6170,0x20800)!=0;
 if(ok)D_1C9CE9=0;
 return ok;
}
