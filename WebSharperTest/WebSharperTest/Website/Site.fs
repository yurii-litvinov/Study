namespace Website

open IntelliFactory.Html
open IntelliFactory.WebSharper
open IntelliFactory.WebSharper.Sitelets

module Site =

    type Action =
        | Index

    let homePage =
        Div [
                Div [new Controls.HelloControl()]
                Div [new Controls.ServerCalculationControl()]
                Div [new Controls.FormletsControl()]
            ]

    let homePageContent = 
        PageContent <| fun context -> { Page.Default with
                                            Title = Some "Hello, world"
                                            Body = [ homePage ]
                                      }

    let Main =
        Sitelet.Sum [
            Sitelet.Content "/" Index homePageContent
        ]

type Website() =
    interface IWebsite<Site.Action> with
        member this.Sitelet = Site.Main
        member this.Actions = [Site.Index]

[<assembly: WebsiteAttribute(typeof<Website>)>]
do ()
