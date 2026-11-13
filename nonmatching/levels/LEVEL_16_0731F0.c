/* USA LEVEL_16.REL:0x0731F0, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 164 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
extern unsigned int func_06FA78(char *);
float func_0731F0(char *o,int type)
{
 if(o && *(unsigned char *)(*(char **)(o+0x40)+0x3f)==1){
  if(type==3)return (float)func_06FA78(o);
  if(type==2)return (float)(int)func_06FA78(o);
 }
 return 0;
}
