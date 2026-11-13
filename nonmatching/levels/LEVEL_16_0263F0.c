/* USA LEVEL_16.REL:0x0263F0, 172-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 164 linked bytes; first differing word +0x20.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern char *D_1A1AB4,*D_1A1AB8;
int func_0263F0(unsigned int i,int enabled)
{
 if(i>=2)return 0;
 if(!enabled||!D_1A1AB4||!D_1A1AB8)return 0;
 *(float *)(D_1A1AB4+0x28)=*(float *)(D_1A1AB8+i*0x5f8+0x2c);
 *(unsigned int *)(D_1A1AB4+0x24)=*(unsigned int *)(D_1A1AB8+i*0x5f8+0x40);
 *(unsigned int *)(D_1A1AB4+0x40)=*(unsigned int *)(D_1A1AB8+i*0x5f8+0x44);
 *(unsigned int *)(D_1A1AB4+0x18)=*(unsigned int *)(D_1A1AB8+i*0x5f8+0x48);
 *(unsigned int *)(D_1A1AB4+0x1c)=*(unsigned int *)(D_1A1AB8+i*0x5f8+0x4c);
 return 1;
}
