/* USA SCUS_976.15 boot: VID_InitBink__Fv, 0x01E943B0.
 * Observed body: 152 bytes, followed by another function inside the 208 byte interval.
 * Measured 17 November 2026: all 152 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It allocates IOP heap memory for the Bink
 * RAD sound driver (the allocation is done twice and only the second result is
 * kept, as in retail), starts the IOP side, sets the hardware volumes and
 * registers the RAD IOP sound system with Bink.
 * The result is 1 when the IOP start-up fails or Bink accepts the sound system,
 * 0 when Bink rejects it: a single "if (startup) { ...; if (!bink) return 0; }
 * return 1;" guard produced the retail branch layout.
 * Its only direct caller, the retained SND_InitScream__Fv trial, now declares
 * the int result too and stays exact (remeasured 25 November 2026).
 */
extern int bink_iop_addr;
extern int RAD_IOPMemoryAmount(int);
extern void *sceSifAllocIopHeap(int);
extern int RAD_IOPStartUp(int, int, int, int);
extern void RAD_IOPHardwareVolumes(int, int, int, int, int);
extern int BinkSetSoundSystem(void *, int);
extern int BinkOpenRAD_IOP(int);

int VID_InitBink__Fv(void) {
    bink_iop_addr = (int)sceSifAllocIopHeap(RAD_IOPMemoryAmount(2));
    bink_iop_addr = (int)sceSifAllocIopHeap(RAD_IOPMemoryAmount(2));
    if (RAD_IOPStartUp(1, -1, bink_iop_addr, 2)) {
        RAD_IOPHardwareVolumes(1, 0x3FFF, 0x3FFF, 0x7FFF, 0x7FFF);
        if (!BinkSetSoundSystem((void *)BinkOpenRAD_IOP, 1)) {
            return 0;
        }
    }
    return 1;
}
