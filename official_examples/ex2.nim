# This example shows several controls of NiGui.



import nigui



app.init()



var window = newWindow()



var container = newLayoutContainer(Layout_Vertical)

window.add(container)



# Add a Button control:

var button = newButton("ボタン")

container.add(button)



# Add a Label control:

var label = newLabel("ラベル")

container.add(label)



# Add a TextBox control:

var textBox = newTextBox("テキストボックス")

container.add(textBox)



# Add a TextArea control:

var textArea = newTextArea("TextArea\nLine 2\n")

container.add(textArea)



# Add more text to the TextArea:

for i in 3..30:

  textArea.addLine("Line " & $i)



window.show()



app.run()