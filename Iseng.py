import openai

openai.api_key = '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'

messages = [ {"role": "system", "content": "You are a intelligent assistant."} ]

 
while True: 
    message = input("User : ") 
    if message: 
        messages.append( 
            {"role": "user", "content": message}, 
        ) 
        chat = openai.ChatCompletion.create( 
            model="gpt-3.5-turbo", messages=messages 
        ) 
      
    reply = chat.choices[0].message.content 
    print(f"ChatGPT: {reply}") 
    messages.append({"role": "assistant", "content": reply})