# Review Journal

I treated `meridian-chain-mempool-lab` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 188, lane `ship`
- `stress`: `nonce pressure`, score 95, lane `hold`
- `edge`: `settlement risk`, score 174, lane `ship`
- `recovery`: `proof depth`, score 189, lane `ship`
- `stale`: `event finality`, score 132, lane `watch`

## Note

This file is intentionally plain so the fixture remains the source of truth.
