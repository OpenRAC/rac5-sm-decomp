/* USA LEVEL_03:0x039678, 64 retail bytes; seven raw-identical candidate sites.
 * Pinned C links to 64 bytes but differs at body byte 22: the two nested
 * callback-pointer loads use different temporary registers. Equivalent
 * typed-vtable, direct-call and qualified SDK/GNU trial forms retain that
 * difference. Recover the callback ABI or an evidenced source lifetime before
 * retrying all sites. This source is uncounted.
 */
typedef void (*Callback_039678)(char *, int, float, int, int, int, int);

void func_039678(char *object)
{
    char *child = *(char **)(object + 0x5D4);
    if (child != 0) {
        char *dispatch = *(char **)(child + 0x40);
        Callback_039678 callback = *(Callback_039678 *)(dispatch + 0x20);
        callback(child, 14, 0.0f, 0, 0, 0, 0);
    }
}
