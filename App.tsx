import { useState } from "react";
import { Fragment } from "react/jsx-runtime";

function App() {
  // const divContent='标签内容'
  // const divTitle='标签标题'

  // const flag=true
  // let divContent=null
  // if(flag){
  //   divContent=<span>flag为true</span>
  // }else{
  //   divContent=<a>flag为flase</a>
  // }
  // return (
  //   <div title={divTitle}>
  //     {divContent}

  //   </div>
  // );
  const [date,setDate] =useState( [
    { id: 1, name: "小吴", major: "软件技术" },
    { id: 2, name: "小李", major: "计算机应用技术" },
    { id: 3, name: "小花", major: "计算机科学与技术" },
  ]);

  // const  listContent= list.map(item=>(
  //   <Fragment key={item.id}>
  //     <li>{item.name}</li>
  //     <li>-----------</li>
  //     <li>{item.major}</li>
  //     <li>-----------</li>
  //   </Fragment>

  // ))
  // const [content,steContent]=useState['标签的默认内容']

  // const [date, setDate] = useState({
  //   title: "默认标题",
  //   content: "默认内容",
  // });
const listDate=date.map(item=>(
  <li key={item.id}>{item.name}</li>
))

  // let id=3
  function handleClick() {
      setDate(date.filter(item=>item.id!==2))
      // ...date,
      // title: "新标题",
      // content:'默认内容'
    };
    // divConten='新内容'
    // console.log('点击了按钮',)
  

  return (
    <>
      <ul>{listDate}</ul>
      <button onClick={handleClick}>按钮</button>
    </>

    // <ul>{listContent}</ul>
  )
}

export default App;
