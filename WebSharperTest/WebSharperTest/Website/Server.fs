namespace Website

module Server = 
    open IntelliFactory.WebSharper

    [<Rpc>]
    let SomeServerCalc x = 
        x + 1


