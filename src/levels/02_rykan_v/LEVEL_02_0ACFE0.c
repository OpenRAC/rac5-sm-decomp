/* LEVEL_02:0x0ACFE0 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0AD2B0(unsigned int);
extern char *func_0AD568(int,unsigned int,unsigned int);
extern char *func_138048(char *,char *,char *,unsigned int);
extern unsigned char D_20B8AA,D_20B8A9;
extern char D_334A60[],D_30C230[];
int func_0ACFE0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0AD2B0(a)||!D_20B8AA)return 0;
 if(!D_20B8A9)return 1;
 name=func_0AD568(2,a,b);
 ok=func_138048(D_334A60,name,D_30C230,0x20800)!=0;
 if(ok)D_20B8A9=0;
 return ok;
}
