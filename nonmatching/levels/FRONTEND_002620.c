/* FRONTEND.REL:0x002620, bounded 28-byte candidate.
 * Isolated pinned C object: 28 bytes; first linked difference
 * at body byte +12. Not linked into the accepted gate or counted.
 * Reopen: Recover the second-argument ABI conversion that places a move in the imported lseek call delay slot.
 */
extern int asyncPs2fioLseek(int, unsigned long, int);

int func_002620(int fd, unsigned long offset, int whence)
{
    return asyncPs2fioLseek(fd, offset, whence);
}
