/* FRONTEND.REL:0x027520: 21 reviewed USA placements.
 * Ghidra body: 172 bytes; pinned C links 172 bytes and first differs at +0.
 * The indirect dispatch has a different stack frame and saved-register order. Reopen with the callback prototypes and six-argument ABI.
 * This source has no matching credit.
 */
typedef int (*Getter)(void);
typedef long long (*ValueGetter)(void);
typedef void (*Dispatcher)(char *, long long, long long, long long,
                           long long, long long);

void func_027520(Getter get_object, ValueGetter get_first,
                 long long third, long long fourth,
                 ValueGetter get_second, long long sixth)
{
    char *object = (char *)(unsigned int)get_object();
    char *owner = *(char **)(object + 4);
    short offset = *(short *)(owner + 0x10);
    long long first = get_first();
    long long second = get_second();
    Dispatcher dispatch = *(Dispatcher *)(owner + 0x14);
    dispatch(object + offset, first, third, fourth, second, sixth);
}
