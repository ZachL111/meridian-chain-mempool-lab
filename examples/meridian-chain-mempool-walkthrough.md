# Meridian Chain Mempool Lab Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 188 | ship |
| stress | nonce pressure | 95 | hold |
| edge | settlement risk | 174 | ship |
| recovery | proof depth | 189 | ship |
| stale | event finality | 132 | watch |

Start with `recovery` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `proof depth` against `nonce pressure`, not the raw score alone.
