/* LEVEL_05:0x0A4C90 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A4F60(unsigned int);
extern char *func_0A5218(int,unsigned int,unsigned int);
extern char *func_12D610(char *,char *,char *,unsigned int);
extern unsigned char D_1E5C6A,D_1E5C69;
extern char D_309420[],D_2E0BF0[];
int func_0A4C90(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A4F60(a)||!D_1E5C6A)return 0;
 if(!D_1E5C69)return 1;
 name=func_0A5218(2,a,b);
 ok=func_12D610(D_309420,name,D_2E0BF0,0x20800)!=0;
 if(ok)D_1E5C69=0;
 return ok;
}
