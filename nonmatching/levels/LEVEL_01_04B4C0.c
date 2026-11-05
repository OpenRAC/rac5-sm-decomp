/* LEVEL_01.REL:0x04B4C0, bounded 32-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C emits a
 * 44-byte body, first linked difference at body byte +5: the compiler
 * expands the 64-bit clear mask through a longer constant sequence.
 * Reopen with a source-level constant construction or an opt-in qualified
 * compiler remedy with controls for previously accepted mask users.
 * Not linked into the accepted gate or counted.
 */void func_04B4C0(char *object)
{
    *(unsigned long long *)(object + 0x960) &= 0xFFFFFFEFFFFFFFFFULL;
}
