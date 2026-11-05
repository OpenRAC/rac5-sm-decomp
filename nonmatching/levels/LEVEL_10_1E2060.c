/* USA LEVEL_10:0x1E2060, 60 retail bytes.
 * Pinned C links to 68 bytes; first difference at body byte
 * 4. This is a publishable source hypothesis, not a match.
 * Establish the virtual callback prototype and saved-register setup
 * before retrying the indirect call.
 * This source is uncounted.
 */
typedef void (*Callback_1E2060)(char *, int);

void func_1E2060(char *object)
{
    char *child = *(char **)(object + 0x58);
    char *member = *(char **)(child + 0x60);
    if (*(unsigned char *)(member + 0x45) == 2) {
        char *vtable = *(char **)child;
        Callback_1E2060 callback = *(Callback_1E2060 *)(vtable + 4);
        callback(object, 12);
    }
}
