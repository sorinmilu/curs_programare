import asyncio

async def show():
    print("kompjuter")
    await asyncio.sleep(1)
    print("ordinador")
    await asyncio.sleep(1)
    print("computer")

async def main():
    await asyncio.gather(show(), show(), show())

asyncio.run(main())

