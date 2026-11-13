/* LEVEL_15:0x086F98 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_087268(unsigned int);
extern char *func_087520(int,unsigned int,unsigned int);
extern char *func_0F0B60(char *,char *,char *,unsigned int);
extern unsigned char D_14B56A,D_14B569;
extern char D_2355A0[],D_20CD70[];
int func_086F98(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_087268(a)||!D_14B56A)return 0;
 if(!D_14B569)return 1;
 name=func_087520(2,a,b);
 ok=func_0F0B60(D_2355A0,name,D_20CD70,0x20800)!=0;
 if(ok)D_14B569=0;
 return ok;
}
