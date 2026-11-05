/* LEVEL_02.REL:0x029E90, bounded 28-byte body.
 * Isolated pinned C links 28 bytes; first difference at body byte +12:
 * the imported call's delay slot lacks the retail 64-bit argument move.
 * Reopen: recover the source-level ABI conversion or qualify a compiler
 * route that retains that move. Width and pointer prototypes and five
 * qualified cc1 variants failed on the frontend representative.
 */
extern int asyncPs2fioLseek(int, unsigned long, int);

int func_029E90(int fd, unsigned long offset, int whence)
{
    return asyncPs2fioLseek(fd, offset, whence);
}
