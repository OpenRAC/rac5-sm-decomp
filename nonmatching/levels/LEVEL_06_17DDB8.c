/* USA LEVEL_06.REL:0x17DDB8, 100-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 100 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
extern void func_016B60(int,int);
void func_17DDB8(char *o)
{
 unsigned char *p=(unsigned char *)*(char **)(o+0x54)+0x21;
 unsigned int i;
 for(i=0;i<8;i++,p++)if(*p!=255)func_016B60(*p,0);
}
