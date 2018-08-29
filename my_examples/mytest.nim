import nigui

app.init()

var window = newWindow("NiGui Example")
window.width = 600
window.height = 400

var mainContainer = newLayoutContainer(Layout_Vertical)
window.add(mainContainer)

var buttonContainer = newLayoutContainer(Layout_Horizontal)
mainContainer.add(buttonContainer)

var button = newButton("Button 1")
buttonContainer.add(button)

var button2 = newButton("Button 2")
buttonContainer.add(button2)

var textArea = newTextArea()
mainContainer.add(textArea)

button.onClick = proc(event: ClickEvent) =

  textArea.addLine("Button 1 clicked, message box opened.")
  window.alert("This is a simple message box.")
  textArea.addLine("Message box closed yeahhhhh.")

window.show()

app.run()