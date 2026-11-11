/* LEVEL_18:159F48 -- reports whether the block's field at +0x178 reaches one. */
int func_159F48(char *a0)
{
    return *(float *)(*(char **)(a0 + 0x58) + 0x178) >= 1.0f;
}
