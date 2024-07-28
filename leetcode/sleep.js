async function sleep(millis) {
    setTimeout (()=>{
        return millis
    },millis)
}

console.log(await sleep(100))