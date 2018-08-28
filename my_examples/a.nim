import nigui

app.init()

var window = newWindow("NiGui Example")
window.width = 600
window.height = 400

var container = newLayoutContainer(Layout_Vertical)
window.add(container)

var button = newButton("Button 1")
container.add(button)

var textArea = newTextArea()
container.add(textArea)

button.onClick = proc(event: ClickEvent) =

  textArea.addLine("Button 1 clicked, message box opened.")
  window.alert("This is a simple message box.")
  textArea.addLine("Message box closed yeahhhhh.")

window.show()

app.run()