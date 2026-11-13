/* LEVEL_03:0x0A6450 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A6720(unsigned int);
extern char *func_0A69D8(int,unsigned int,unsigned int);
extern char *func_130060(char *,char *,char *,unsigned int);
extern unsigned char D_20EF6A,D_20EF69;
extern char D_3383E0[],D_30FBB0[];
int func_0A6450(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A6720(a)||!D_20EF6A)return 0;
 if(!D_20EF69)return 1;
 name=func_0A69D8(2,a,b);
 ok=func_130060(D_3383E0,name,D_30FBB0,0x20800)!=0;
 if(ok)D_20EF69=0;
 return ok;
}
