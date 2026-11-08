/* LEVEL_01.REL:0x024728: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 108 bytes; first differs at +64.
 * Retry: Recover the separate comparison temporary and saved result assignment after
 * the second call; current C links 108 of 112 bytes.
 * No matching credit.
 */
typedef unsigned int u32;
extern u32 func_0252D8(u32 first, u32 second);
extern char *func_0246D0(u32 first, u32 index, u32 second);
int func_024728(u32 first, u32 second)
{
    u32 index = func_0252D8(first, second);
    int result = 0;
    char *entry = func_0246D0(first, index, second);
    if (*(u32 *)(entry + 0x20)) {
        u32 next = index + 1;
        result = next < 8;
    }
    return result;
}
