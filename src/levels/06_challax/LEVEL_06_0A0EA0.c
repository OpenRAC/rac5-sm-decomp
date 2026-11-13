/* LEVEL_06:0x0A0EA0 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A1170(unsigned int);
extern char *func_0A1428(int,unsigned int,unsigned int);
extern char *func_128368(char *,char *,char *,unsigned int);
extern unsigned char D_1E57EA,D_1E57E9;
extern char D_30A2E0[],D_2E1AB0[];
int func_0A0EA0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A1170(a)||!D_1E57EA)return 0;
 if(!D_1E57E9)return 1;
 name=func_0A1428(2,a,b);
 ok=func_128368(D_30A2E0,name,D_2E1AB0,0x20800)!=0;
 if(ok)D_1E57E9=0;
 return ok;
}
