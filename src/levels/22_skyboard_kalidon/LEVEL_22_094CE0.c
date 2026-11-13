/* LEVEL_22:0x094CE0 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_094FB0(unsigned int);
extern char *func_095268(int,unsigned int,unsigned int);
extern char *func_109168(char *,char *,char *,unsigned int);
extern unsigned char D_155C6A,D_155C69;
extern char D_273120[],D_24A8F0[];
int func_094CE0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_094FB0(a)||!D_155C6A)return 0;
 if(!D_155C69)return 1;
 name=func_095268(2,a,b);
 ok=func_109168(D_273120,name,D_24A8F0,0x20800)!=0;
 if(ok)D_155C69=0;
 return ok;
}
