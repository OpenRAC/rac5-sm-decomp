/* LEVEL_16.REL:0x0A5E88: reviewed 128-byte candidate, held for ABI review.
 * Runs six per-slot update steps for two slots.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0A5CB0(int slot);
extern void func_0A5AE0(int slot);
extern void func_0A6138(int slot, void *obj);
extern void func_0A6540(int slot);
extern void func_0A68C0(int slot);
extern void func_0A6FE8(int slot);
extern void func_0A7EA8(int slot);
extern void func_0A5E20(int slot);

extern char *D_001A1AB4;

void func_0A5E88(void)
{
	unsigned int i;

	i = 0;
	do {
		func_0A5CB0(i);
		func_0A5AE0(i);
		func_0A6138(i, *(void **)(D_001A1AB4 + 0x1C68));
		func_0A6540(i);
		func_0A68C0(i);
		func_0A6FE8(i);
		func_0A7EA8(i);
		func_0A5E20(i);
		i++;
	} while (i < 2);
}
