/* USA LEVEL_01.REL:0x014978, 80-byte candidate.
 * Measured pinned/gnu-ee-trial: 76 linked bytes; first differing word +0x18.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern unsigned int D_206D94;
unsigned int func_014978(unsigned int *entry, unsigned int limit)
{
 unsigned int count=0; int more;
 while(count<limit) {
   if (*entry==0) more=0;
   else { more=1; *entry=D_206D94+*entry; }
   ++entry;
   if(!more) break;
   ++count;
 }
 return count;
}
