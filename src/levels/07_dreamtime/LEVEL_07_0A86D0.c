/* LEVEL_07:0x0A86D0 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A89A0(unsigned int);
extern char *func_0A8C58(int,unsigned int,unsigned int);
extern char *func_134C98(char *,char *,char *,unsigned int);
extern unsigned char D_20ABEA,D_20ABE9;
extern char D_332E60[],D_30A630[];
int func_0A86D0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A89A0(a)||!D_20ABEA)return 0;
 if(!D_20ABE9)return 1;
 name=func_0A8C58(2,a,b);
 ok=func_134C98(D_332E60,name,D_30A630,0x20800)!=0;
 if(ok)D_20ABE9=0;
 return ok;
}
