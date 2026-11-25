/* LEVEL_18:0x0728A0 -- placement copy of LEVEL_16_0731F0.c: for an object whose record type is 1, returns the helper result as a float (converted unsigned for kind 3, signed for kind 2), else 0. */
extern int func_06F140(void);
float func_0728A0(char *o,int type)
{
 if(o && *(unsigned char *)(*(char **)(o+0x40)+0x3f)==1){
  if(type==3)return (float)((unsigned int (*)(char *))func_06F140)(o);
  if(type==2)return (float)((int (*)(char *))func_06F140)(o);
 }
 return 0;
}
