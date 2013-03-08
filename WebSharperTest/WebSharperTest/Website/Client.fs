namespace Website

module Client =
    open IntelliFactory.WebSharper
    open IntelliFactory.WebSharper.Html
    open IntelliFactory.WebSharper.Formlet

    [<JavaScript>]
    let helloText = Div [ Text "HELLO THERE" ]

    [<JavaScript>]
    let button = Button [ Text "Click me" ]

    [<JavaScript>]
    let SayHello () =
        JavaScript.Alert("HELLO!")

    [<JavaScript>]
    let MakeHelloDiv () =
        SayHello ()
        Div [
            helloText
            Div [ button |>! OnClick (fun element _ -> helloText.Text <- "Clicked") ]
        ]

    [<JavaScript>]
    let MakeDivWithResultsOfServerCalculation () =
        let serverResponse = Server.SomeServerCalc 1
        Div [ 
            Text "Server returned: "
            Text <| string serverResponse
        ]

    [<JavaScript>]
    let MakeDivWithFormlets () =
        Div [
            Controls.Input "ololo"
            |> Enhance.WithTextLabel "ololololo"
        ]
    
module Controls =
    open IntelliFactory.WebSharper
        
    type HelloControl() = 
        inherit Web.Control()

        [<JavaScript>]
        override this.Body = Client.MakeHelloDiv () :> _
        
    type ServerCalculationControl() =
        inherit Web.Control()

        [<JavaScript>]
        override this.Body = Client.MakeDivWithResultsOfServerCalculation () :> _

    type FormletsControl() =
        inherit Web.Control()

        [<JavaScript>]
        override this.Body = Client.MakeDivWithFormlets () :> _