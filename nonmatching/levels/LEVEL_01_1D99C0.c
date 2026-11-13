/* USA LEVEL_01.REL:0x1D99C0, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 176 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern float D_22AD68[7],D_398C78[7],D_398C68[4];
void func_1D99C0(int enabled,int phase)
{
 if(phase==65535&&enabled){
  float *p=D_398C78;
  *p++=1.0f/D_22AD68[0];*p++=1.0f/D_22AD68[1];*p++=1.0f/D_22AD68[2];
  *p++=1.0f/D_22AD68[3];*p++=1.0f/D_22AD68[4];*p++=1.0f/D_22AD68[5];*p++=1.0f/D_22AD68[6];
  D_398C68[0]=0;D_398C68[3]=1;D_398C68[1]=0;D_398C68[2]=0;
 }
}
