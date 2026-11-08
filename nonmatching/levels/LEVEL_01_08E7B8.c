/* LEVEL_01.REL:0x08E7B8: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 104 bytes; first differs at +13.
 * Retry: Recover the ten-argument forwarding register schedule; retain the named
 * db_dlist import and 112-byte extent.
 * No matching credit.
 */
typedef unsigned int u32;

extern char db_dlist[];
extern char *func_08CF70(char *old, int capacity,
                         u32 arg0, u32 arg1, u32 arg2, u32 arg3,
                         u32 arg4, u32 arg5, u32 arg6, u32 arg7);

void func_08E7B8(u32 arg0, u32 arg1, u32 arg2, u32 arg3,
                 u32 arg4, u32 arg5, u32 arg6, u32 arg7)
{
    char *list = *(char **)(db_dlist + 0x54);
    char *next = func_08CF70(*(char **)(list + 8), 0x400,
                             arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    *(char **)(list + 8) = next;
    *(char **)(list + 4) = next + 0x10;
}
