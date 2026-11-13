/* Pinned GNU EE: all 96 bytes link exactly. The scaled finite input to
   fptoui lies in [0, 2^30] for every unsigned 32-bit input. */
extern unsigned int fptoui(float) __asm__("func_204438");
unsigned int func_14F9D8(unsigned int input, int enabled)
{
    if (enabled) input = fptoui((float)input * 0.25f);
    return input;
}
